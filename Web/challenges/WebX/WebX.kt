package com.basicsec.demoweb

import io.jsonwebtoken.Jwts
import io.vertx.core.AbstractVerticle
import io.vertx.core.Vertx
import io.vertx.core.json.JsonObject


class MainVerticle : AbstractVerticle() {

  private val flag = System.getenv("FLAG") ?: "TE9M"

  override fun start() {
    vertx.createHttpServer().requestHandler { req ->
      try {
        val session = req.getHeader("Authorization").removePrefix("Bearer ")
        val claims = Jwts.parser().setSigningKey(flag).parse(session).body.toString()
        val username = claims.split("=")[1].removeSuffix("}") // becuz json iz xo snow
        if (username == "hackerman")
          req.response()
            .putHeader("content-type", "text/plain")
            .end("You won hackerman! $flag")
        else
          req.response()
            .putHeader("content-type", "text/plain")
            .end("What are you doooooooinggg?")
      } catch (e: Exception) {
        e.printStackTrace()
        req.response()
          .putHeader("content-type", "text/plain")
          .end("Hacker man dont hack m3 plz. Wow jwt, much kotlin, too jvm, extreme secure just lik3 bLocKChaIn")
      }
    }.listen(8080) { res ->
      if (res.failed()) {
        res.cause().printStackTrace()
      } else {
        System.out.println("Server listening at: http://localhost:8080/")
      }
    }
  }
}

fun main(args: Array<String>) {
  Vertx.vertx().deployVerticle(MainVerticle())
}

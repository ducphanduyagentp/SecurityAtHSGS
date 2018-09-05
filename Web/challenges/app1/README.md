# XSS Challenges

## Getting up and running

To run the Docker container, use the following command:

```
docker build . -t app1.1
docker run -tid -v $PWD/templates:/templates --name xsschalls -p 7331:7331 app1.1
```

### Credits

- quangltm: web 5,6
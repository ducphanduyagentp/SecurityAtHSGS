from flask import *
from alertChecker import checkAlert

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/level/<level>')
def getLevel(level):
    return render_template('level{}.html'.format(level))

@app.route('/checkSolution', methods=["POST"])
def checkSolution():
    payload = request.form['inputToCheck']
    level = request.form['level']
    if checkAlert(payload, level):
        flags = open('web-flags.txt').read().strip()
        flags = flags.split('\n')
        return flags[int(level)]
    return "It didn't work"

if __name__ == '__main__':
    app.config['TEMPLATES_AUTO_RELOAD'] = True
    app.run(host="0.0.0.0", port=7331, debug=True)

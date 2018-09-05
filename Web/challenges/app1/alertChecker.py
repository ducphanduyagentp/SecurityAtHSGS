from selenium import webdriver
from selenium.webdriver.support.wait import WebDriverWait
from selenium.webdriver.support import expected_conditions
import re

SITE_URL = "http://localhost:7331/level/{}"

def checkAlert(payload, level):
    print "CHECKING {}: {}".format(level, re.escape(payload))
    options = webdriver.ChromeOptions()
    options.add_argument('--headless')
    options.add_argument('--no-sandbox')

    browser = webdriver.Chrome(chrome_options=options)
    print "Started Webdriver"

    browser.get(SITE_URL.format(level))
    print "Get website done"

    #inp = browser.find_elements_by_id("inp")
    #assert(len(inp) == 1)
    #inp[0].send_keys(payload)
    browser.execute_script("document.getElementById('inp').setAttribute('value', '{}')".format(re.escape(payload)))
    submitButton = browser.find_elements_by_id("btn-submit")
    assert(len(submitButton) == 1)
    print "URL before: {}".format(browser.current_url)
    submitButton[0].click()
    #print "URL after: {}".format(browser.current_url)
    try:
        isAlertPop = WebDriverWait(browser, 10).until(expected_conditions.alert_is_present())
        print "POPUP TEXT {}: {}".format(level, isAlertPop.text)
        if int(level) == 6:
            result = isAlertPop.text == "1"
            print "result == {}".format(result)
            browser.quit()
            return result
    except:
        browser.quit()
        return False
    browser.quit()
    return True

def main():
    pass

if __name__ == '__main__':
    main()

from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.keys import Keys
chrome_options = Options()
chrome_options.add_argument('--headless')
chrome_options.add_argument('--no-sandbox')
chrome_options.add_argument('--disable-dev-shm-usage')


import time
class DiscordBot():
    def __init__(self):
        self.browser = webdriver.Chrome()

    def signIn(self):
        self.browser.get('#the channel link')
        time.sleep(30)
        elem = self.browser.find_elements_by_class_name("slateTextArea-1Mkdgw")# this is the part where i need help
        while(True):
            elem[0].send_keys('T!points' + Keys.ENTER)
            time.sleep(121)

        
        
        
        
        
bot=DiscordBot()
bot.signIn()
#<div aria-label="Message #redeem-tokens" aria-multiline="true" data-can-focus="true" data-slate-editor="true" data-key="7" contenteditable="true" class="markup-2BOw-j slateTextArea-1Mkdgw fontSize16Padding-3Wk7zP" autocorrect="off" spellcheck="true" role="textbox" data-gramm="false" style="outline: none; white-space: pre-wrap; overflow-wrap: break-word; -webkit-user-modify: read-write-plaintext-only;"><div data-slate-object="block" data-key="8" style="position: relative;"><span data-slate-object="text" data-key="9"><span data-slate-leaf="true" data-offset-key="9:0"><span data-slate-zero-width="z" data-slate-length="0">﻿<br></span></span></span></div></div>

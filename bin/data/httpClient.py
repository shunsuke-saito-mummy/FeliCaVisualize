# coding: utf-8
import urllib.request
import json
import codecs


class HttpClient():
    def httpGet():
        url = 'https://script.google.com/macros/s/AKfycbxWAZpk0m3Xe3CWt80IZwncvgjowlT4FTdannJlaHofOFUGcKcC/exec'
        request = urllib.request.Request(url)
        response = urllib.request.urlopen(request)
        content = json.loads(response.read().decode('utf-8'))
        return content

    def loadData():
        data = httpGet()
        with codecs.open("data.json", "w", "utf-8") as target:
            json.dump(data, target, ensure_ascii=False, indent=4)


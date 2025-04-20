import re
class tokenizer_hindi:
    def __init__(self,text):
        self.t = text
    def punctuations(self):
        '''tokenize punctuations'''
        pattern = r'[|,;?!""-:^°=…]'
        res = re.split(pattern,self.t)
        return res
    def dates(self):
        '''dates from text'''
        pattern = r'[\d]+/[\d]+/[\d]+'
        return re.findall(pattern,self.t)
    def urls(self):
        '''returns url from text'''
        pattern = r'http[s]*://www.[\w]+.com'
        return re.findall(pattern,self.t)
    def emails(self):
        '''returns emails from text'''
        pattern = r'[\w]+@[\w]+.com'
        return re.findall(pattern,self.t)
    def numbers(self):
        '''returns various numbers from text'''
        pattern = r'[\d]+/[d]+|[\d]+[.]+[\d]+|\s[\d]+\s'
        return re.findall(pattern,self.t)
    def username(self):
        '''returns social media usernames handle names'''
        pattern = r'@[\w]+'
        return re.findall(pattern,self.t)
    def display(self):
        return self.t
    def whole(self):
        pattern = r'[|,;?!""-:^°=…]|[\d]+/[\d]+/[\d]+|http[s]*://www.[\w]+.com|[\w]+@[\w]+.com|[\d]+/[d]+|[\d]+[.]+[\d]+|\s[\d]+\s|@[\w]+|\w+'
        return re.findall(pattern,self.t)
    
a = tokenizer_hindi('''नमस्ते! यह एक उदाहरण पाठ है। यहाँ हम विभिन्न विराम चिन्हों का उपयोग करेंगे, जैसे अल्प विराम (,), पूर्ण विराम (।), और प्रश्नवाचक चिन्ह (?).
    आज की तारीख 25/02/2025 है। क्या आप इसे पढ़ सकते हैं?
    आप मुझे example@example.com पर संपर्क कर सकते हैं। यहाँ एक वेबसाइट भी है: https://www.example.com
    ट्विटर पर मेरा उपयोगकर्ता नाम है @example_user।
    हमारे पास 3 किलो सेव, 7 संतरे, और 2.5 किलो अंगूर हैं।''')

print(a.punctuations())
print(a.dates())
print(a.urls())
print(a.emails())
print(a.numbers())
print(a.username())

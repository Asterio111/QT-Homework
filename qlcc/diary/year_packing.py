import os
import csv
from datetime import datetime
from collections import Counter
year = int(input())
date_format = '%Y-%m-%d.txt'
# 获取当前目录下的所有 .txt 文件
txt_files = [f for f in os.listdir('.') if f.endswith('.txt')]
# 创建一个 .csv 文件并写入数据
with open(f'{year}.csv', 'w', newline='', encoding='utf-8') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(['Month', 'Day', 'Content'])  # 写入表头

    # 遍历所有 .txt 文件
    for txt_file in txt_files:
        try:
            parsed_date = datetime.strptime(txt_file, date_format).date()
        except:
            continue
        if(parsed_date.year==year):
            
            with open(txt_file, 'r', encoding='utf-8') as file:
                content = file.read()  # 读取文件内容
                writer.writerow([parsed_date.month,parsed_date.day, content])  # 写入文件名和内容



# 定义一个函数来统计某个月的条数
def count_entries_for_month(entries, target_month):
    count = 0
    for entry in entries:
        if entry['Month'] == target_month:
            count += 1
    return count
entires = []
contents = ""
month_max = 0
with open(f'{year}.csv', 'r',encoding='utf-8') as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        entires.append(row)

    month_counts = Counter(entry['Month'] for entry in entires)
    try:
        month_max = month_counts.most_common(1)[0]
    except:
        month_max = 6
for entry in entires:
    month = entry['Month']
    day = entry['Day']
    content = entry['Content']
    contents += f"{month}月{day}日，{content}\n"
example_text = '2022年对你来说，是个喜忧参半的年份。（分段）这一年你在三月份写日记最多，这是为什么？（分段）你在三月份略显忧愁，但是在八月份斗志昂扬，也许这是因为放暑假了吧！（分段）这些日记条目不仅是记录，也是成长的见证。在2023年，我们记念美好瞬间，也铭记挑战与困难，它们使我们更坚强。（分段）随着这一年结束，我们带着收获和经验迎接2023年。无论未来如何，保持积极态度，坚持目标，我们将创造更辉煌的一年。让我们携手迎接新挑战，共创辉煌！'
example_words=f"{contents},今年是{year}年，以上是一位同学的日记内容，统计发现他写日记最多的是{month_max}月，请你根据这个同学的日记内容，写一份年报，需要考虑到日记中同学的心情波动，下面是一个例子：{example_text}"



import openai
import os

useSystemPrompt = False
openai.api_key = 'sk-LJpMYG1IUKX6C493gaQusl1Y54mTb7ajjqsjMntC41KWB53h'
openai.api_base = "https://api.chatanywhere.tech"

response = openai.ChatCompletion.create(
    model='gpt-3.5-turbo-1106',
    messages=[
    {'role':'user',"content":example_words}]
)
generated_code = response.choices[0].message.content
with open(f'{year}_summary'+'.txt','w',encoding='utf-8') as f:
    f.write(generated_code)
'''
2022年对你来说，是个喜忧参半的年份。（分段）这一年你在三月份写日记最多，这是为什么？（分段）你在三月份略显忧愁，但是在八月份斗志昂扬，也许这是因为放暑假了吧！（分段）这些日记条目不仅是记录，也是成长的见证。在2023年，我们记念美好瞬间，也铭记挑战与困难，它们使我们更坚强。（分段）随着这一年结束，我们带着收获和经验迎接2023年。无论未来如何，保持积极态度，坚持目标，我们将创造更辉煌的一年。让我们携手迎接新挑战，共创辉煌！
'''
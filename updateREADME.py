# coding=utf-8
import os
import time
import datetime

dirs = os.listdir('./Algorithm')
dir_number = []
dir_names = []
for f in dirs:
    dir_number.append(int(f.split('.')[0]))
sort_files = dict(
    zip(dir_number, dirs)
)
names = []
times = []
for dir in sorted (sort_files.items()):
    dir_names.append(((dir[1].split('.')[1])[1:].lower()).replace(' ','-'))
    mtimeObj = os.stat( "./Algorithm/"+dir[1] )
    mtime = time.ctime(mtimeObj.st_mtime)
    mtime = datetime.datetime.strptime(mtime, '%a %b %d %H:%M:%S %Y')
    mtime = mtime.strftime("%Y/%m/%d")
    times.append(mtime)
    names.append(dir[1])

start_str = "# LeetCodePracticeRecords\nI recently start to practice Leetcode's problems .Thus,I would like to use this to record the code and how i thought during coding these problems\n\n"

title_h2_str = "## 已完成\n"

total_str = "總計 `"+str(len(names))+"` 題\n"

form_str = "\n題目          | 完成日期 | Program Language |\n--------------|:-----:|:----:|\n"

print(times)
# exit()

with open('README.md', 'w', encoding='utf8') as f:
    f.writelines([start_str,title_h2_str, total_str, form_str])
    for i in range(len(names)):
        # problem
        f.write("[" + names[i] + "]" + "(https://leetcode.com/problems/"+dir_names[i]+")")
        f.write(" | ")
        # date
        f.write(times[i])
        f.write(" | ")
        f.write('C++')
        f.write("\n")

    # Add todo
    f.write('\n\n')
    f.write('## TODO\n\n')
    f.write('- [ ] Finish Time different on repo & local (cause by github action)')


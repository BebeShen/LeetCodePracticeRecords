#coding=utf-8
import sys
import os
import datetime

def rename(path):
    for dirname in os.listdir(path):
        if not os.path.isdir(dirname):continue
        elif dirname == ".git":continue
        else: print(os.path.join(path, dirname))
        for fname in os.listdir(os.path.join(path, dirname)):
            # if fname == "Readme.txt" or fname == "Readme.md":
            #     print(os.path.join(os.path.join(path, dirname),fname))
            #     os.rename(os.path.join(os.path.join(path, dirname),fname), os.path.join(os.path.join(path, dirname),"README.md"))
            if fname == 'README.md':
                filename = os.path.join(os.path.join(path, dirname),fname)
                content = ''
                flag = False
                with open(filename,'r') as f:
                    lines = f.readlines()
                    for line in lines:
                        if "======" in line:
                            content = lines
                            flag = True
                if flag:
                    with open(filename,'w') as f:
                        for line in content:
                            if "====" not in line:
                                f.write(line)
                            else:
                                f.write("---")
                    break
path="./"
# rename(path)

def add(path):
    problem_list = []
    sort_key_list = []
    for dirname in os.listdir(path):
        if not os.path.isdir(dirname):continue
        elif dirname == ".git":continue
        else: 
            num = (int)(dirname.split('.')[0])
            problem_list.append((num,dirname))
    # add `encoding="utf-8"` to prevent [UnicodeDecodeError: 'cp950' codec can't decode byte 0xae in position 183: illegal multibyte sequence]
    problem_list.sort()
    with open('README.md','r',encoding="utf-8") as f:
        content = f.readlines()
        # print(content)
    today = datetime.datetime.now().strftime("%Y/%m/%d")
    with open('README.md','a',encoding="utf-8") as f:
        for p in problem_list:
            f.writelines('['+str(p[1])+']()' +" | "+today+" |    c++ |\n")
            # print(str(p) +" | "+today+" |    c++ |\n")
# add(path)

# Usage:`python .\new.py <dirname>`
def new(path,name):
    dirname = os.path.join(path, name)
    if not os.path.exists(name):
        os.mkdir('./'+name)
    fname = name.split('. ')[1]
    with open(dirname + "/" + fname + ".cpp",'w') as f:
        f.write("#include<bits/stdc++.h>\n\n")
        f.write("using namespace std;\n\n")
        f.write("int main(){\n\t\n")
        f.write("\treturn 0;\n")
        f.write("}\n")
    linkname = str(fname).lower().replace(' ','-')
    with open(dirname + "/" + "README.md",'w') as f:
        f.write("# "+name+"\n\n")
        f.write("## Description\n\n")
        f.write("---\n")
        f.write("\n")
        f.write("https://leetcode.com/problems/"+linkname+"\n")
        f.write("\n")
        f.write("---\n")

new(path,sys.argv[1])

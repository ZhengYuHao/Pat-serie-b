# -*- coding: utf-8 -*-
"""
Created on Wed Mar 21 08:13:28 2018
@author: Administrator
"""
def translate(data):#函数用于将数字字符转化为数字
    for i in range(len(data)):
        if (ord(data[i])>=ord('0') and ord(data[i])<=ord('9') ):
            data[i]=int(data[i])
        else:
            continue
    return data
    
def getScore(data,answer):#函数用于获得每个学生答题之后获得的分数
        count=0#判断选项是否完整
        tell=False#判断是否多选
        temp=[]#变量用于集合lack和wrong
        lack=[]#用于保存答题者缺少的选项
        wrong=list(set(data[1:-1])-set(answer[2:-1]))#用于保存答题者错选的信息
        lack=list(set(answer[3:-1])-set(data[1:-1]))
        for i in range(len(data)-1):
            if (data[i+1] in answer):#正确选择
                count+=1
            elif(data[i+1] not in answer):#错选
                tell=True
        if(count==answer[2] and tell==False):
            temp=[0]
            return answer[0],temp
        elif(tell==True):
            temp.extend(lack)
            temp.extend(wrong)
            return 0,temp
        elif(tell==False):
            temp.extend(lack)
            temp.extend(wrong)
            return answer[0]/2.0,temp
    

            
studntNum,testNum=input().split()#输入在第一行给出两个正整数N（<=1000）和M（<=100），分别是学生人数和多选题的个数。
studntScore=[]#用于保存每个学生的分数
studntNum=int(studntNum)
testNum=int(testNum)
testQuestion=[]#保存试题内容与正确答案
testAnswer=[]#用于保存学生的答题模拟数据
wrongCount=[]
for i in range(testNum):#初始化试题内容与正确答案
    testQuestion.append(translate(input().split()))
for i in range(studntNum):#学生答题模拟
    temporary=input()[1:-1]
    temporary=temporary.split(') (')
    for i in range(len(temporary)):
        temporary[i]=translate(temporary[i].split(" "))
    testAnswer.append(temporary)
for i in range(studntNum):#对N个学生进行循环
    scoreCount=0
    b=[]
    for j in range(testNum):#对M道题目进行循环
        temp1,temp2=getScore(testAnswer[i][j],testQuestion[i])
        scoreCount+=temp1
        b.append(temp2)
    print(scoreCount)
    wrongCount.append(b)
print(wrongCount)    

    
    


#批改多选题是比较麻烦的事情，有很多不同的计分方法。有一种最常见的计分方法是：
#如果考生选择了部分正确选项，并且没有选择任何错误选项，则得到50%分数；
#如果考生选择了任何一个错误的选项，则不能得分。本题就请你写个程序帮助老师批改多选题，
#并且指出哪道题的哪个选项错的人最多。
#
#输入格式：
#
#输入在第一行给出两个正整数N（<=1000）和M（<=100），分别是学生人数和多选题的个数。
#随后M行，每行顺次给出一道题的满分值（不超过5的正整数）、选项个数（不少于2且不超过5的正整数）、
#正确选项个数（不超过选项个数的正整数）、所有正确选项。注意每题的选项从小写英文字母a开始顺次排列。
#各项间以1个空格分隔。最后N行，每行给出一个学生的答题情况，其每题答案格式为“(选中的选项个数 选项1 ……)”，
#按题目顺序给出。注意：题目保证学生的答题情况是合法的，即不存在选中的选项数超过实际选项数的情况。
#
#输出格式：
#
#按照输入的顺序给出每个学生的得分，每个分数占一行，输出小数点后1位。最后输出错得最多的题目选项的信息，
#格式为：“错误次数 题目编号（题目按照输入的顺序从1开始编号）-选项号”。如果有并列，则每行一个选项，
#按题目编号递增顺序输出；再并列则按选项号递增顺序输出。行首尾不得有多余空格。如果所有题目都没有人错，
#则在最后一行输出“Too simple”。
#
#输入样例1：
#3 4 
#3 4 2 a c
#2 5 1 b
#5 3 2 b c
#1 5 4 a b d e
#(2 a c) (3 b d e) (2 a c) (3 a b e)
#(2 a c) (1 b) (2 a b) (4 a b d e)
#(2 b d) (1 e) (1 c) (4 a b c d)
#输出样例1：
#3.5
#6.0
#2.5
#2 2-e
#2 3-a
#2 3-b
#输入样例2：
#2 2 
#3 4 2 a c
#2 5 1 b
#(2 a c) (1 b)
#(2 a c) (1 b)
#输出样例2：
#5.0
#5.0
#Too simple

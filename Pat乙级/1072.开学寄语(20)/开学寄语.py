# -*- coding: utf-8 -*-
"""
Created on Tue Mar 20 11:22:03 2018

@author: Administrator
"""
countPerson,countMaterial=0,0#变量用于统计查出总的人数以及物品数
countStudent,countSpecies=input().split()#分别是学生人数和需要被查缴的物品种类数。
species=input().split()#物品种类数明细
for i in range(int(countStudent)):#对每个人进行排查
    person=input().split()
    Tell=False#用于判断该学生是否是问题学生
    for j in range(len(person)-2):
        if(person[j+2]in species):
            if(Tell==True):gio
                print(" ",end='')
            else:
                print(str(person[0])+": ",end='')
            Tell=True
            print(person[j+2],end='')
            countMaterial+=1
    if(Tell==True):
        print()#完全输出一个学生的情况后进行换行
        countPerson+=1
print(countPerson,countMaterial)  
        
    
    
#输入格式：
#
#输入第一行给出两个正整数N（<= 1000）和M（<= 6），分别是学生人数和需要被查缴的物品种类数。
#第二行给出M个需要被查缴的物品编号，其中编号为4位数字。随后N行，每行给出一位学生的姓名缩写
#（由1-4个大写英文字母组成）、个人物品数量K（0 <= K <= 10）、以及K个物品的编号。
#
#输出格式：
#
#顺次检查每个学生携带的物品，如果有需要被查缴的物品存在，则按以下格式输出该生的信息和其需要被查缴的物品的信息
#（注意行末不得有多余空格）：
#
#姓名缩写: 物品编号1 物品编号2 ……
#最后一行输出存在问题的学生的总人数和被查缴物品的总数。
#
#输入样例：
#4 2
#2333 6666
#CYLL 3 1234 2345 3456
#U 4 9966 6666 8888 6666
#GG 2 2333 7777
#JJ 3 0012 6666 2333
#输出样例：
#U: 6666 6666
#GG: 2333
#JJ: 6666 2333
#3 5
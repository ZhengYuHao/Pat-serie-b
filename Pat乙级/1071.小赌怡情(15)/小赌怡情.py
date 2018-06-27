# -*- coding: utf-8 -*-
"""
Created on Tue Mar 20 08:44:32 2018

@author: Administrator
"""
T,K=map(int,input().split())#获得最开始需要的两个数据
#用于存储k次数据
a=[]
for i in range(K):#对k次游戏进行初始化
    b=[0,0,0,0]#每次游戏需要的数据
    b[0],b[1],b[2],b[3]=map(int,input().split())
    a.append(b)
for i in range(K):#进行k次游戏模拟
    if((a[i][2]<=T and a[i][0]>a[i][3] and a[i][1]==0)or(a[i][2]<=T and a[i][0]<a[i][3] and a[i][1]==1)):
        T+=a[i][2]
        print("Win ",a[i][2],"!  ","Total = ",T,".")
    elif((a[i][2]<=T and a[i][0]>a[i][3] and a[i][1]==1)or(a[i][2]<=T and a[i][0]<a[i][3] and a[i][1]==0)):
        T-=a[i][2]
        print(T)
        print("Lost ",a[i][2],"!  ","Total = ",T,".")
    elif(T==0):
        print(T)
        print("Game Over.")
        break
    elif(a[i][2]>T):
        print(a[i][2],T)
        print("Not enough tokens.  ","Total = ",T,".")
    
    
#string_1 = input().split()  
#total = int(string_1[0])  
#num = int(string_1[1])  
#for i in range(num):  
#    string = input().split()  
#    if int(string[2]) > total:  
#        print("Not enough tokens.  Total = " + str(total) + '.')  
#      
#    elif (string[1] == '0' and int(string[0] > string[3])) or (string[1] == '1' and int(string[0] < string[3])):  
#        total += int(string[2])  
#        print("Win " + string[2] + '!  ' + "Total = " + str(total) + '.')  
#    else:  
#        total -= int(string[2])  
#        print("Lose " + string[2] + '.  ' + "Total = " + str(total) + '.')  
#        if total <= 0:  
#            print("Game Over.")  
#            break

#常言道“小赌怡情”。这是一个很简单的小游戏：首先由计算机给出第一个整数；
#然后玩家下注赌第二个整数将会比第一个数大还是小；
#玩家下注t个筹码后，计算机给出第二个数。若玩家猜对了，则系统奖励玩家t个筹码；否则扣除玩家t个筹码。
#
#注意：玩家下注的筹码数不能超过自己帐户上拥有的筹码数。当玩家输光了全部筹码后，游戏就结束。
#
#输入格式：
#
#输入在第一行给出2个正整数T和K（<=100），分别是系统在初始状态下赠送给玩家的筹码数、
#以及需要处理的游戏次数。随后K行，每行对应一次游戏，顺序给出4个数字：
#
#n1 b t n2
#
#其中n1和n2是计算机先后给出的两个[0, 9]内的整数，保证两个数字不相等。b为0表示玩家赌“小”，
#为1表示玩家赌“大”。t表示玩家下注的筹码数，保证在整型范围内。
#
#输出格式：
#
#对每一次游戏，根据下列情况对应输出（其中t是玩家下注量，x是玩家当前持有的筹码量）：
#
#玩家赢，输出
#Win t!  Total = x.
#玩家输，输出
#Lose t.  Total = x.
#玩家下注超过持有的筹码量，输出
#Not enough tokens.  Total = x.
#玩家输光后，输出
#Game Over.
#并结束程序。
#输入样例1：
#100 4
#8 0 100 2
#3 1 50 1
#5 1 200 6
#7 0 200 8
#输出样例1：
#Win 100!  Total = 200.
#Lose 50.  Total = 150.
#Not enough tokens.  Total = 150.
#Not enough tokens.  Total = 150.
#输入样例2：
#100 4
#8 0 100 2
#3 1 200 1
#5 1 200 6
#7 0 200 8
#输出样例2：
#Win 100!  Total = 200.
#Lose 200.  Total = 0.
#Game Over.



faceofdie=6
totalprob=36
diceA=[]
diceB=[]
newdiceA=[]
newdiceB=[]
prob1=[]
prob2=[]
count1=0
count2=0
dif=0
minsum=2
maxsum=12
for i in range(faceofdie):
    diceA.append(int(input()))
    diceB.append(diceA[i])
    newdiceB.append(diceA[i])

mx=int(max(diceA)/2)

for i in range(faceofdie):
    if diceA[i]>4:
        newdiceA.append(diceA[i]-mx)
    else:
        newdiceA.append(diceA[i])
print("Dice A: ",diceA)
print("Dice B: ",diceB)
print("NewdiceB: ",newdiceA)
for i in range(faceofdie):
    count1+=diceA[i]
    count2+=newdiceA[i]
dif=count1-count2

count1=0
count2=0

while minsum <= maxsum:
    count1=0
    for i in range(faceofdie):
        for j in range(faceofdie):
            if diceA[i]+diceB[j]==minsum:
                count1+=1
    res=count1/totalprob
    prob1.append(res)
    minsum+=1

minsum=2
res=0
count1=0
for k in range(faceofdie):
    newdiceB[k] += dif
    minsum=2
    prob2=[]
    while minsum <= maxsum:
        count1=0
        for i in range(faceofdie):
            for j in range(faceofdie):
                if newdiceA[i]+newdiceB[j]==minsum:
                    count1+=1
        res=count1/totalprob
        prob2.append(res)
        minsum+=1
    if prob1==prob2:
        break
    else:
        newdiceB[k]-=dif
        
print("NewdiceB: ",newdiceB)

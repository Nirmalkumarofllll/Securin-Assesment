def q1(faceofdie,n):
    return pow(faceofdie,n)
    
def q2(faceofdie):
    for i in range(1,faceofdie+1):
        for j in range(1,faceofdie+1):
            print("(",i,",",j,")")

def q3(faceofdie,total):
    number=2
    count=0
    while(number<13):
        count=0
        for i in range(1,faceofdie+1):
            for j in range(1,faceofdie+1):
                if(i+j==number):
                    count+=1
        res=count/total
        print("the prob of ", number ,"is", res)
        number+=1

faceofdie=6
n= int (input())
total=q1(faceofdie,n)
print(total)
q2(faceofdie)
q3(faceofdie,total)

def total_combination(inpt,faceofdie):
    total=faceofdie**inpt
    return total

def distribution_of_possible_combinations(faceofdie):
    for i in range(1,faceofdie+1):
        for j in range(1,faceofdie+1):
            print("(",i,",",j,")")

def prob(faceofdie,total):
    minsum=2
    maxsum=12
    while minsum <= maxsum:
        count=0
        for i in range(1,faceofdie+1):
            for j in range(1,faceofdie+1):
                if i+j==minsum:
                    count+=1
        Probability=count/total
        print("Probability of",minsum,"is: ",Probability)
        minsum+=1
inpt=int(input())
faceofdie=6
total=total_combination(inpt,faceofdie)
print(total)
obj2=distribution_of_possible_combinations(faceofdie)
obj3=prob(faceofdie,total)

m = raw_input()
no = m.split( ) 
result = []
m = 0 

while m<=len(no)-1:
    result.append(int(no[m])*int(no[m+1])
    #print ' '
    #result.append(int no[m+1]-1)
    if m+2!=len(no):
        print ' '
    m+=2

for i in result:
    print i

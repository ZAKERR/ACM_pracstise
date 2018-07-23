from cyaron import *

_n = ati([5,20,100,1000,5000,1E4,5*1E4,1E5,2*1E5,3*1E5])
_x = ati([1,10,1E2,1E3,1E4,1E5,1E6,1E7,1E8,5*1E8])

for i in range(1,11):
    
    io = IO(file_prefix="test",data_id=i)
    
    n = _n[i-1]
    if(i <= 4 ):
        x = randint(1,_x[randint(0,3)])
        y = randint(1,_x[randint(0,3)])
    else:
        x = randint(1,_x[randint(0,9)])
        y = randint(1,_x[randint(0,9)])

    STR = String.random(n,charset="01")
    io.input_writeln(n,x,y)
    io.input_writeln(STR)
    io.output_gen("C:\\Users\\Admin\\Documents\\GitHub\\ACM_pracstise\\CF\\HJH_493DIV2\\A. Convert to Ones\\main.exe")





from ctypes import *

work = CDLL("D:\cmys1109\Python c++\Dll1.dll")

print(work)

work.outloaded()

a = work.outadd(5,999)
print(a)
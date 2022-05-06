 
# Author: Amir Aghazadeh
 
def check(year):
    return len(list(set(list(year)))) == len(year)
 
year = input()
year += 1
 
while(not check(str(year))):
    year += 1
print(year)
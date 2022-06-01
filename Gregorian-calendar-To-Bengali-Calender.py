
#storing months and their name in bengali and english month
monthDays = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
bmonthdays = [31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 29, 30]
BanglaMonth = ["Baishakh", "Jaishtha", "Ashar", "Srabon", "Bhadro", "Ashwin", "Kartik", "Ogrohayon", "Poush",
                   "Magh", "Falgun", "Chaitra"]


#taking date, month, year
d = int(input("Enter Date : "))
m = int(input("Enter Month: "))
y = int(input("Enter Year : "))


#function: leap year
def countLeapYears(y):
    year = y
    if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)):
        return 1

    else:
        return 0

#Function: counting total days in English Month
def DaysInGivenYear(d, m, y):
    tdays = 0
    i = 0
    for i in range(0, m - 1):
        tdays = monthDays[i] + tdays
        i += 1
    tdays = tdays + d
    return tdays

if (countLeapYears(y) == 0):
    monthDays[1] = monthDays[1] + 1
    bmonthdays[10] = bmonthdays[10] + 1

jan_to_april_13 = 13
for x in range(0, 3):

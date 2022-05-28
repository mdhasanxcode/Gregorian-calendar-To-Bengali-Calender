monthDays = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
bmonthdays = [31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 29, 30]
BanglaMonth = ["Baishakh", "Jaishtha", "Ashar", "Srabon", "Bhadro", "Ashwin", "Kartik", "Ogrohayon", "Poush",
                   "Magh", "Falgun", "Chaitra"]

d = input()
m = input()
y = input()


def countLeapYears():
    year = y
    if (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)):
        return 1

    else:
        return 0


def DaysInGivenYear(d, m, y):
    tdays = 0
    i = 0
    for x in range(0, m - 10):
        tdays = monthDays[i] + tdays
        i += 1

    tdays = tdays + d;
    return tdays


 if countLeapYears() == 1:
    monthDays[1] = monthDays[1] + 1
    bmonthdays[10] = bmonthdays[10] + 1


import datetime

if __name__ == '__main__':
    table = [
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
    ]

    d_m = input().split(" ")
    d,m=int(d_m[0]), int(d_m[1])
    dt = datetime.datetime(2009,m,d)
    print(table[dt.weekday()])

def reformatDate(date):
    dateArrays = date.split()
    day = dateArrays[0]
    month = dateArrays[1]
    year = dateArrays[2]
    months = {
        'Jan': 1,
        'Feb': 2,
        'Mar': 3,
        'Apr': 4,
        'May': 5,
        'Jun': 6,
        'Jul': 7,
        'Aug': 8,
        'Sep': 9,
        'Oct': 10,
        'Nov': 11,
        'Dec': 12
    }
    dayReformat = ''.join(filter(str.isdigit,day))

    return f"{dayReformat}-{months[month]}-{year}"

date = "20th Oct 2052"
print(reformatDate(date))
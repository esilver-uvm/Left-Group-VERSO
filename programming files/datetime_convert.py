#BM
from datetime import datetime

# Date string
date_str = "2022-03-17 10:45:30"
patch-3
# Date string to date object
date_obj = datetime.strptime(date_str, '%m/%d/%Y %H:%M:%S')
# Formatted date object to a reformatted string
formatted_date = date_obj.strftime('%Y-%m-%d %H:%M:%S')

# Prints formatted date
main
print(formatted_date)

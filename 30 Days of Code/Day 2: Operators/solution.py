meal_cost = float(input())
tip_percent = int(input())
tax_percent = int(input())
print(round(meal_cost * tip_percent/100 + meal_cost * tax_percent/100 + meal_cost))

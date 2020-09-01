var meal_cost:real; 
    tip_percent, tax_percent:integer;
begin
    readln(meal_cost);
    readln(tip_percent);
    readln(tax_percent);
    write(round(meal_cost * tip_percent/100 + meal_cost * tax_percent/100 + meal_cost));
    readln
end.

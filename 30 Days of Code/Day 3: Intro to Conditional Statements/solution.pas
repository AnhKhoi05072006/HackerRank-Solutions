var n:integer;
begin
    readln(n);
    if (n mod 2 <> 0) then write('Weird')
    else
    begin 
        if (n <= 5) then write('Not Weird')
        else if (n <= 20) then write('Weird')
        else write('Not Weird')
    end;
    readln
end.

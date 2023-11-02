print_numbers(Limit, Limit) :- 
   write(Limit),nl.
print_numbers(Current, Limit) :- 
    Current < Limit, 
    write(Current), nl,
    Next is Current + 1,
    print_numbers(Next, Limit).


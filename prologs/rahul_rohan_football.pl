% define the facts for Rahul and Rohan are boys
boy(rahul).
boy(rohan).

% define the predicate to check whether Rahul can play football if it is raining and Rahul is free
can_play(X, football) :- rain, free(X), boy(X), X == rahul.


max(X, Y, Z, Max) :-
    X >= Y,
    Y >= Z,
    Max is X.
max(X, Y, Z, Max) :-
    Y >= X,
    Y >= Z,
    Max is Y.
max(X, Y, Z, Max) :-
    Z >= X,
    Z >= Y,
    Max is Z.

greatest(X, Y, Z, Max) :-
    max(X, Y, Z, Max).



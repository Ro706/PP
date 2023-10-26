parent(alice, bob).
parent(bob, carol).
parent(carol, dave).

grandparent(X, Y) :- parent(X, Z), parent(Z, Y).


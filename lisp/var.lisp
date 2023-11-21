;variable x having 234 value

(defvar x 234)
(write x)

(terpri)
(defvar y 20)
(write y)
(terpri)
(setq x 10)
(setq y 20)
(format t "x = ~2d y = ~2d ~%" x y)


(setq x 100)
(setq y 200)
(format t "x = ~2d y = ~2d" x y)

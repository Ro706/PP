(defun area ()
  (princ "Enter a redius: ")
  (setq rad (read))
  (defvar area (* 3.14 rad rad ))
  (format t "Area of circle ~5f" area)
)
(area)


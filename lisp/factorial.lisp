(defun factorial (n)
  (if (<= n 1)
      (progn
        (format t "Factorial of ~A is 1.~%" n)
        1)
      (let ((fact (factorial (- n 1))))
        (format t "Factorial of ~A is ~A.~%" n (* n fact))
        (* n fact))))

(factorial 5)

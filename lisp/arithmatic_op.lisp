(defun arithmetic-operation ()
  (format t "Enter first number: ")
  (let ((num1 (read)))
    (format t "Enter second number: ")
    (let ((num2 (read)))
      (format t "Arithmetic Operations on ~a and ~a:~%" num1 num2)
      (format t "Addition: ~a~%" (+ num1 num2))
      (format t "Subtraction: ~a~%" (- num1 num2))
      (format t "Multiplication: ~a~%" (* num1 num2))
      (format t "Division: ~a~%" (/ num1 num2)))))

(arithmetic-operation)


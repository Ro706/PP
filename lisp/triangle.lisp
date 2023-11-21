;; Function to find the area of a triangle

(defun area-of-triangle (base height)
  (/ (* base height) 2))

;; Usage of functions
(format t "Area of Triangle: ~a~%" (area-of-triangle 9 6))


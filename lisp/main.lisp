;; Define functions for each operation

;; Function to find the area of a triangle
(defun area-of-triangle (base height)
  (/ (* base height) 2))

;; Function to find the area of a rectangle
(defun area-of-rectangle (length width)
  (* length width))

;; Function to find the cube of a number
(defun cube (num)
  (expt num 3))

;; Function to convert Fahrenheit to Celsius
(defun fahrenheit-to-celsius (f)
  (/ (* (- f 32) 5) 9))

;; Usage of functions
(format t "Area of Triangle: ~a~%" (area-of-triangle 5 8))
(format t "Area of Rectangle: ~a~%" (area-of-rectangle 4 6))
(format t "Cube of 3: ~a~%" (cube 3))
(format t "Fahrenheit to Celsius (F=68): ~a~%" (fahrenheit-to-celsius 68))


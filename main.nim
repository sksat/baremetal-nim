import strutils
proc puts(str: cstring) {.header: "libnim.h", importc: "puts"}

proc fib(n: int): int =
  if n < 2:
    result = n
  else:
    result = fib(n - 1) + fib(n - 2)

puts("hello")
puts(fib(38).intToStr)

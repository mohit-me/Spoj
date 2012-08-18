n = gets.to_i()
r = 1
for i in 1..n
        r = r * i
end
r = r + (2 ** n) - n
puts r
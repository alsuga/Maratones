cont = 0
result = 0
string = ""
s = ""
a = Array.new
b = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
c = Array.new
for i in (1..2_000)
  for j in (1..200)
    result = i*j
    string = i.to_s  + j.to_s + result.to_s
    if(string.length != 9 or i == j)then
      next
    end
    a = string.split('').sort
    if(a == b)then
      c.push(result)
    end
  end
end
c.sort!
c.uniq!
c.each do |p|
  cont += p
end
puts cont.to_s
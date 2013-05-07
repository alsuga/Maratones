def ques(i)
  return i.to_s.split("").sort  
end

def q1(i)
  for j in (1..5)
    if not(ques(i * j) == ques(i*(j+1)))
      return false
    end
  end
  return true
end

for i in (100000..10000000)
  if q1(i)
    puts i
  end
end


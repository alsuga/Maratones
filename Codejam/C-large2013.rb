def palindrome(i)
  if i.to_s == i.to_s.reverse then 
    return true
  else 
    return false
  end
end
File.open('text.txt', 'w') do |f2|
  i = 1
  j = i*i
  while true do 
    if j > 10**100 then 
      break
    end
    if palindrome i and palindrome j then
      f2.puts j    
    end
    i += 1
    j = i*i
  end
end
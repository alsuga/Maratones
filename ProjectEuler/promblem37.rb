require 'prime'
ac = 0
Prime.each(1000000) do |primo|  
  i = 10
  pri = primo
  flag = true
  while primo > i do
    if not(Prime.prime?(primo % i) and Prime.prime? (primo/i))
      flag = false
      break
    end
    i = i*10
  end
  
  if flag and pri > 10
    ac = ac + pri
  end
end

puts ac
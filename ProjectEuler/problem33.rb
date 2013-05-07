eq = '1'
mult = 1
mult2 = 1


while eq != '10'
  n1 = '1'
  while n1 != '10'
    d1 = '1'
    while d1 != '10'
      num = (n1 + eq).to_i
      den = (eq + d1).to_f
      if(num / den == n1.to_i/d1.to_f and num != den.to_i )then
        puts num.to_s + " / " + den.to_s
        mult *= num
        mult2 *= den
      end
      d1.next!
    end
    n1.next!
  end
  eq.next!
end

puts mult.to_s + " " + mult2.to_s
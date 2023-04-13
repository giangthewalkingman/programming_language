h = {
    :one => 1,
    :two => 2
}
h[:one] = 1
h[:two] = 2
h[:three] = 3
h[:wtf_number] = 5
h[:four] = 4
h.each do |key,value|
    print "#{value} : #{key} "
end
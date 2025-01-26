largest = a
if b > largest then
  largest = b
end if
if c > largest then
  largest = c
end if
if d > largest then
  largest = d
end if
return largest


if a > b then
  if a > c then
    if a > d then
      return a
    else
      return d
    end if
  else if c > d then
      return c
    else
      return d
  end if
else if b > c then
    if b > d then
      return b
    else
      return d
  end if
else if c > d then
    return c
else
    return d
end if
def shippingCost(pounds):
    baseCost = pounds*.32 + 7.50
    if(pounds > 100 or baseCost >= 30):
        baseCost = baseCost-1.50
    return baseCost

print("Shipping 10 pounds of oranges costs ", shippingCost(10))

print("Shipping 30 pounds of oranges costs ", shippingCost(30))

print("Shipping 100 pounds of oranges costs ", shippingCost(100))

print("Shipping one pound of oranges costs ", shippingCost(1))

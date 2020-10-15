---
title:  Hello, Chart!
author: Marko
date:   2020-10-15, 19:57:03
---

Hello!

```{.matplotlib caption="This is a simple figure with a **Markdown** caption"}
import matplotlib.pyplot as plt

plt.figure()
plt.plot([0,1,2,3,4], [1,2,3,4,5])
plt.title('This is an example figure')
```

```{.matplotlib}
import dateutil.parser
from matplotlib import cbook
import matplotlib.pyplot as plt
import numpy as np


datafile = cbook.get_sample_data('msft.csv', asfileobj=False)
print('loading', datafile)

data = np.genfromtxt(
    datafile, delimiter=',', names=True,
    dtype=None, converters={0: dateutil.parser.parse})

fig, ax = plt.subplots()
ax.plot(data['Date'], data['High'], '-')
fig.autofmt_xdate()
```

Blah.

```{.matplotlib}
import matplotlib.pyplot as plt
import csv
from datetime import datetime

x=[]
y=[]

with open('../hello-chart/table.csv', 'r') as csvfile:
    plots= csv.reader(csvfile, delimiter=',')
    for row in plots:
        x.append(datetime.strptime(row[0], "%H:%M"))
        y.append(int(row[1]))


plt.plot(x,y, 'o-')
plt.gcf().autofmt_xdate()

plt.xlabel('Time')
plt.ylabel('Temperature')
```

Blah.

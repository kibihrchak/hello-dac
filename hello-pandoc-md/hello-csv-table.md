---
title:  Hello, CSV Table!
author: Marko
date:   2020-10-15, 19:44:02
---

Hello!

```{.table}
---
caption: '*Awesome* **Markdown** Table'
alignment: RC
table-width: 2/3
markdown: True
---
First row,defaulted to be header row,can be disabled
1,cell can contain **markdown**,"It can be arbitrary block element:

- following standard markdown syntax
- like this"
2,"Any markdown syntax, e.g.",$$E = mc^2$$
```

```{.table}
---
caption: 'Imported non-Markdown table'
header: True
include: 'hello-csv-table/table.csv'
---
Dummy content.
```

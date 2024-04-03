# path where your taskwarrior data is
data.location=~/.task

news.version=3.0.0

# Context definitions
context.work.read=-MAYBE +WORK or +ANY
context.work.write=+WORK
context.home.read=-MAYBE +HOME or +ANY
context.home.write=+HOME
context.any.read=-MAYBE +ANY
context.any.write=+ANY
context.shop.read=-MAYBE +SHOP
context.shop.write=+SHOP

# user defined attributes
uda.estimate.type=numeric
uda.estimate.label=Estimate

# reports configuration
report.in.description=Inbox
report.in.columns=id,project,description.count,due,tags,estimate
report.in.labels=Id,Proj,Desc,Due,Tags,Estim
report.in.filter=status:pending limit:page (+in)

report.next.labels=ID,Active,Age,Deps,P,Project,Tag,Recur,S,Due,Until,Estimate,Description,Urg
report.next.columns=id,start.age,entry.age,depends,priority,project,tags,recur,scheduled.countdown,due.relative,until.remaining,estimate,description,urgency


# taskd server configuration
# taskd.server=taskd.schinz.de:53589
# taskd.credentials=schinz.de\/Ulrich Schinz\/286f715b-86ec-4fce-8f84-294fac490f12
# taskd.certificate=\/home\/uli\/.task\/Ulrich_Schinz.cert.pem
# taskd.key=\/home\/uli\/.task\/Ulrich_Schinz.key.pem
# taskd.ca=\/home\/uli\/.task\/ca.cert.pem
# taskd.trust=strict
# taskd.ciphers=NORMAL

# urgency settings
# urgency.blocking.coefficient=0

# Color theme (uncomment one to use)
#include /usr/share/doc/task/rc/light-16.theme
#include /usr/share/doc/task/rc/light-256.theme
#include /usr/share/doc/task/rc/dark-16.theme
#include /usr/share/doc/task/rc/dark-256.theme
#include /usr/share/doc/task/rc/dark-red-256.theme
#include /usr/share/doc/task/rc/dark-green-256.theme
#include /usr/share/doc/task/rc/dark-blue-256.theme
include /usr/share/doc/task/rc/dark-violets-256.theme
#include /usr/share/doc/task/rc/dark-yellow-green.theme
#include /usr/share/doc/task/rc/dark-gray-256.theme
#include /usr/share/doc/task/rc/dark-gray-blue-256.theme
#include /usr/share/doc/task/rc/solarized-dark-256.theme
#include /usr/share/doc/task/rc/solarized-light-256.theme
#include /usr/share/doc/task/rc/no-color.theme


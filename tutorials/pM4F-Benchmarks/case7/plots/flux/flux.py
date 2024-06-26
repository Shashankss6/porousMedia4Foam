import matplotlib.pyplot as plt
import numpy as np
import csv
import matplotlib.image as image
#axes = plt.gca()

im = image.imread('plots/flux/legend.eps')
fig, ax = plt.subplots()
ax.imshow(im,aspect='auto', extent=(50,100,2e-7,1.5e-6), zorder=1)

plt.xlabel('Time [years]')
plt.ylabel('Flux of outflow [m3/day]')
plt.title('')

#MIN3P - Paper Data
TimeMIN = []
FluxMIN = []
with open('plots/flux/Min3p-flux','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       TimeMIN.append(float(row[0]))
       FluxMIN.append(float(row[1]))
plt.plot(TimeMIN, FluxMIN,'r-',label='MIN3P',linewidth=5)

#ToughRe
TimeTR = []
FluxTR = []
with open('plots/flux/TR-flux','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       TimeTR.append(float(row[0]))
       FluxTR.append(float(row[1]))
plt.plot(TimeTR, FluxTR,'m-',label='TR',linewidth=5)


#pM4F Flux results
Time = []
Flux = []
with open('postProcessing/flowRatePatch(name=outlet)/9.46002e+09/surfaceFieldValue1.dat','r') as csvfile:
   plots = csv.reader(csvfile, delimiter=' ')
   for row in plots:
       Time.append(float(row[0])/(86400*365))
       Flux.append(float(row[1])*10*86400)
plt.plot(Time, Flux,'c-',label='pM4F',linewidth=5)

#axes.set_xlim([0.,300])
#axes.set_ylim([1e-7, 0.1])
#plt.yscale('log')

#axes.set_xlim([0.,300])
#axes.set_ylim([1e-8, 0.1])
plt.ylim(top=0.1)
plt.ylim(bottom=1e-8)
plt.xlim(left=0.)
plt.xlim(right=300.)

plt.yscale('log')

x_ticks=np.arange(0.,300.001,30)
#y_ticks=np.arange(0.001,1.001)
plt.xticks(x_ticks)
#plt.yticks(y_ticks)
plt.minorticks_on()
plt.tick_params(axis='x',which='minor',direction='in',length=5,width=1.5)
plt.tick_params(axis='y',which='minor',direction='in',length=5, width=1.5)
plt.tick_params(axis='x',which='major',direction='in',length=7.5,width=3)
plt.tick_params(axis='y',which='major',direction='in',length=7.5, width=3)

plt.savefig('B7_flux.eps', format='eps')
plt.show()




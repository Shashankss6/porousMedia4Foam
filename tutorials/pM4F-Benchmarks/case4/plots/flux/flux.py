import matplotlib.pyplot as plt
import numpy as np
import csv
import matplotlib.image as image

#axes = plt.gca()

im = image.imread('plots/flux/legend.eps')
fig, ax = plt.subplots()
ax.imshow(im,aspect='auto', extent=(100,135,0.008,0.05), zorder=1)

plt.xlabel('Time [years]')
plt.ylabel('Flux of outflow [m3/day]')
plt.title('')

#MIN3P - Paper Data
TimeMIN = []
FluxMIN = []
with open('plots/MIN3P_Data_Paper/B2_Flux_150y.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       TimeMIN.append(float(row[0]))
       FluxMIN.append(float(row[1]))
plt.plot(TimeMIN, FluxMIN,'r-',label='MIN3P',linewidth=2.5)

#ToughRe
TimeTR = []
FluxTR = []
with open('plots/Tough_WebExtraction/Flux.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       TimeTR.append(float(row[0]))
       FluxTR.append(float(row[1]))
plt.plot(TimeTR, FluxTR,'m-',label='TR',linewidth=2.5)


#pM4F Flux results
Time = []
Flux = []
with open('postProcessing/flowRatePatch(name=outlet)/4.73999e+09/surfaceFieldValue1.dat','r') as csvfile:
   plots = csv.reader(csvfile, delimiter=' ')
   for row in plots:
       Time.append(float(row[0])/(86400*365))
       Flux.append(float(row[1])*100*86400)
plt.plot(Time, Flux,'c-',label='pM4F',linewidth=2.5)

#axes.set_xlim([0.,150])
#axes.set_ylim([1e-6, 0.1])

plt.ylim(top=0.1)
plt.ylim(bottom=1e-6)
plt.xlim(left=0.)
plt.xlim(right=150.)
plt.yscale('log')

x_ticks=np.arange(0.,150.001,25)
#y_ticks=np.arange(0.001,1.001)
plt.xticks(x_ticks)
#plt.yticks(y_ticks)
plt.minorticks_on()
plt.tick_params(axis='x',which='minor',direction='in',length=5,width=1.5)
plt.tick_params(axis='y',which='minor',direction='in',length=5, width=1.5)
plt.tick_params(axis='x',which='major',direction='in',length=7.5,width=3)
plt.tick_params(axis='y',which='major',direction='in',length=7.5, width=3)

plt.savefig('B2_flux.eps', format='eps')
plt.show()

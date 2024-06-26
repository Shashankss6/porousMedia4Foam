import matplotlib.pyplot as plt
import numpy as np
import csv
import matplotlib.image as image

#axes = plt.gca()
im = image.imread('plots/hydHead/legend.eps')
fig, ax = plt.subplots()
ax.imshow(im,aspect='auto', extent=(.6,.95,0.005,0.0065), zorder=1)

plt.xlabel('Distance [m]')
plt.ylabel('Hydraulic head [m]')
plt.title('')

#MIN3P - Paper Data
DistMIN = []
HH10MIN = []
with open('plots/MIN3P_Data_Paper/B3_MIN3P_10Y.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       DistMIN.append(float(row[0]))
       HH10MIN.append(float(row[3]))
plt.plot(DistMIN, HH10MIN,'r-*',label='MIN3P',linewidth=2.5)

HH100MIN = []
with open('plots/MIN3P_Data_Paper/B3_MIN3P_100Y.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       HH100MIN.append(float(row[3]))
plt.plot(DistMIN, HH100MIN,'r-x',label='MIN3P',linewidth=2.5)

HH300MIN = []
with open('plots/MIN3P_Data_Paper/B3_MIN3P_300Y.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       HH300MIN.append(float(row[3]))
plt.plot(DistMIN, HH300MIN,'r-v',label='MIN3P')

#ToughReact
Dist10TR = []
HH10TR = []
with open('plots/Tough_WebExtraction/hyHead/hh_10Y.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       Dist10TR.append(float(row[0]))
       HH10TR.append(float(row[1]))
plt.plot(Dist10TR, HH10TR,'m-*',label='ToughRe',linewidth=2.5)

Dist100TR = []
HH100TR = []
with open('plots/Tough_WebExtraction/hyHead/hh_100Y.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       Dist100TR.append(float(row[0]))
       HH100TR.append(float(row[1]))
plt.plot(Dist100TR, HH100TR,'m-x',label='ToughRe',linewidth=2.5)

Dist300TR = []
HH300TR = []
with open('plots/Tough_WebExtraction/hyHead/hh_300Y.txt','r') as csvfile:
   plots = csv.reader(csvfile, delimiter='\t')
   for row in plots:
       Dist300TR.append(float(row[0]))
       HH300TR.append(float(row[1]))
plt.plot(Dist300TR, HH300TR,'m-v',label='TR',linewidth=2.5)


#pM4F Porosity results
Dist = []
HH10 = []
with open('postProcessing/singleGraph/3.149928e+08/line_eps_p_K_Ys.Calcite_Ys.Gypsum_Ys.Ferrihydrite_Ys.Gibbsite_Ys.Siderite_Ys.Jarosite.xy','r') as csvfile:
   plots = csv.reader(csvfile, delimiter=' ')
   for row in plots:
       Dist.append(float(row[0]))
       HH10.append(float(row[2])/(1000*9.81))
plt.plot(Dist, HH10,'c-*',label='pM4F',linewidth=2.5)

HH100 = []
with open('postProcessing/singleGraph/3.1499928e+09/line_eps_p_K_Ys.Calcite_Ys.Gypsum_Ys.Ferrihydrite_Ys.Gibbsite_Ys.Siderite_Ys.Jarosite.xy','r') as csvfile:
   plots = csv.reader(csvfile, delimiter=' ')
   for row in plots:
       HH100.append(float(row[2])/(1000*9.81))
plt.plot(Dist, HH100,'c-x',label='pM4F',linewidth=2.5)

HH300 = []
with open('postProcessing/singleGraph/9.45e+09/line_eps_p_K_Ys.Calcite_Ys.Gypsum_Ys.Ferrihydrite_Ys.Gibbsite_Ys.Siderite_Ys.Jarosite.xy','r') as csvfile:
   plots = csv.reader(csvfile, delimiter=' ')
   for row in plots:
       HH300.append(float(row[2])/(1000*9.81))
plt.plot(Dist, HH300,'c-v',label='pM4F')

#axes.set_xlim([0.,1])
#axes.set_ylim([0.,0.008])

plt.ylim(top=0.008)
plt.ylim(bottom=0.)
plt.xlim(left=0.)
plt.xlim(right=1.)

x_ticks=np.arange(0.,1.001,0.2)
y_ticks=np.arange(0.,0.008001,0.002)
plt.xticks(x_ticks)
plt.yticks(y_ticks)
plt.minorticks_on()
plt.tick_params(axis='x',which='minor',direction='in',length=5,width=1.5)
plt.tick_params(axis='y',which='minor',direction='in',length=5, width=1.5)
plt.tick_params(axis='x',which='major',direction='in',length=7.5,width=3)
plt.tick_params(axis='y',which='major',direction='in',length=7.5, width=3)


plt.savefig('B3_hydHead.eps', format='eps')
plt.show()




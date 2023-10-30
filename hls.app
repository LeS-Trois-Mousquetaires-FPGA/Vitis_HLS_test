<project xmlns="com.autoesl.autopilot.project" name="axi_dma_audio_multiplier" top="doGain">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../core_TB.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="axi_dma_audio_multiplier/core.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="axi_dma_audio_multiplier/core.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>


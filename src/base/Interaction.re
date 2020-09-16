
[@bs.module "./Interaction.jsx"][@react.component]
external make: (
    ~type_: string = ?,
    ~config: 'config = ?,
    ~children: React.element = ?,
) => React.element = "default"